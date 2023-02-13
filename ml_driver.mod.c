#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcaec5711, "module_layout" },
	{ 0x174de43c, "param_ops_int" },
	{ 0xb9635609, "usb_deregister" },
	{ 0x1742c223, "usb_register_driver" },
	{ 0xb8fa3c95, "usb_deregister_dev" },
	{ 0xf0ef52e8, "down" },
	{ 0x5d75a61f, "usb_register_dev" },
	{ 0xa9cc9062, "usb_string" },
	{ 0x3abb616e, "usb_alloc_urb" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x902ae67c, "kmem_cache_alloc_trace" },
	{ 0x7a90966d, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x4b0606db, "usb_free_urb" },
	{ 0x5f754e5a, "memset" },
	{ 0xc962d6a0, "usb_control_msg" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x581cde4e, "up" },
	{ 0x3d2be8d8, "usb_submit_urb" },
	{ 0xca5a7528, "down_interruptible" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xedb27d2a, "usb_find_interface" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0x2fa44291, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0A81p0701d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F2B48BE446E108BAECC6032");
