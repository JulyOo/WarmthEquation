-include ../makefile.rule

SOURCES = geometry/point.cc

FILEO= ${SOURCES:.cc=.o}

all: ${FILEO}
	${CC} ${CFLAGS} ${FILEO} -o ../${BINARY}

%.o: %.cc
	${CC} ${CFLAGS} -c $^ -o $@
