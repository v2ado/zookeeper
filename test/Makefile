#compiler the zookeeper api


TARGET=aaaaaa

OBJECTS=$(filter-out ../test/%.cc, $(shell find ../ -name "*.cc"))


FLAG=-I /usr/local/include/zookeeper -l zookeeper_mt -std=c++0x

GCC=g++

INCLUDE= -I ../

all:
	$(GCC) $(TARGET) $(OBJECTS) $(FLAG) $(INCLUDE)
