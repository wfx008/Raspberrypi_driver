obj-m+=hello.o
kdir=/usr/src/`uname -r`/
PWD=$(shell pwd)
all:
        make -C $(kdir) M=$(PWD) modules
clean:
        rm *.o *.ko *.mod.c *.order *.symvers
