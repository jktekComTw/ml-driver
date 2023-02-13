#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
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
__used __section(__versions) = {
	{ 0xdd8f8694, "module_layout" },
	{ 0x867847b8, "usb_deregister" },
	{ 0x785cf894, "usb_register_driver" },
	{ 0x7b262fbe, "usb_deregister_dev" },
	{ 0x6626afca, "down" },
	{ 0x5b42218f, "usb_control_msg" },
	{ 0x5ab904eb, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9166fada, "strncpy" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x853bbff4, "usb_register_dev" },
	{ 0x987e553d, "usb_string" },
	{ 0x102ff065, "usb_alloc_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca7a3159, "kmem_cache_alloc_trace" },
	{ 0x428db41d, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdcfd186, "usb_free_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xcf2a6966, "up" },
	{ 0x72e2c5fd, "usb_submit_urb" },
	{ 0x81b395b3, "down_interruptible" },
	{ 0xaa2a8b37, "usb_find_interface" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0xf5b8840d, "usb_kill_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0A81p0701d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "66732B408E83CE755A0072F");
