#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

void hello_init(void)
{
        printk(KERN_INFO"This is hello module test !!!\n");
}
void hello_exit(void)
{
        printk(KERN_ALERT"The module will be remove from kernrl space !!!\n");
}
module_init(hello_init);
module_exit(hello_exit);
