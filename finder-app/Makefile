CC = $(CROSS_COMPILE)gcc

default: writer

writer:
	$(CC) writer.c -o writer

clean:
	@if [ -e "writer" ]; then \
		rm writer; \
	fi 
	@find . -name "*.o" -type f -print -delete