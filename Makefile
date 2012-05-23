-include makefile.rule


all:
	make -C src/

clean:
	find . -name '*.o' -delete
	find . -name '*~' -delete
	find . -name '\#*' -delete
	find . -name '.#*' -delete

distclean: clean
	rm -rf makefile.rule ${BINARY}

plot: all
	./elfi -p > tmp
	echo 'plot "tmp"' | gnuplot -p
	rm tmp

