PROJECT_ROOT = $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

INCLUDE_PATH_FLAG = -I./core

SOURCE_FILES_CC = ./app/rosehip.cpp \
				  ./core/layer.cpp \
				  ./core/tensor.cpp

OBJS = $(subst .cpp,.o,${SOURCE_FILES_CC})

ifeq ($(BUILD_MODE),run)
	CFLAGS += -O2
else
	CFLAGS += -g
endif

CFLAGS += ${INCLUDE_PATH_FLAG}

all:	rosehip

rosehip:	$(OBJS)
	$(CXX) -o ./app/$@ $^

%.o:	%.cpp
	@echo "making target:" $(INCLUDE_PATH_FLAG)
	$(CXX) -c $(CFLAGS) $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

%.o:	%.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<	

clean:
	rm -fr ./app/rosehip $(OBJS)
