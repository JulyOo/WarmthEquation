-include ../makefile.rule

SOURCES = geometry/point.cc geometry/border.cc main.cc warmth-source.cc\
	net/knot.cc net/net.cc

FILEO= ${SOURCES:.cc=.o}

all: ${FILEO}
	${CC} ${CFLAGS} ${FILEO} -o ../${BINARY}

%.o: %.cc
	${CC} ${CFLAGS} -c $^ -o $@
