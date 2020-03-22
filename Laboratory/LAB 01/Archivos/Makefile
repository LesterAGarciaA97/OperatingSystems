obj-m += practica2.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=/home/laga97/Escritorio modules
clean:
	make -C /lib/modules/$(shell uname -r)/build M=/home/laga97/Escritorio clean
