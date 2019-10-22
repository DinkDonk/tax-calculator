all:
	gcc -std=c99 -o tax main.c

install: tax
	install -m 0755 tax /usr/local/bin

.PHONY: install