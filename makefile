CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
CXXFLAGS += -v
LDFLAGS = -lboost_date_time

OBJS = main.o Character.o Barbarian.o Vampire.o BlueMen.o Medusa.o HarryPotter.o

SRCS = main.cpp Character.cpp Barbarian.cpp Vampire.cpp BlueMen.cpp Medusa.cpp HarryPotter.cpp

HEADERS = Character.hpp Barbarian.hpp Vampire.hpp BlueMen.hpp Medusa.hpp HarryPotter.hpp

fantasy: ${SRCS} ${HEADERS} 
	${CXX} ${LDFLAGS} ${SRCS} -o fantasy

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm fantasy
