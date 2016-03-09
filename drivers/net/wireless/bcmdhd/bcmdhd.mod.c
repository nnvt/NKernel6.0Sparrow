#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xf090aaf4, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x5b768c05, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0xb1d8ccb4, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0xee37632f, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x3f4c4798, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x316db4d9, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0x3019b82, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0xc1f9dba7, __VMLINUX_SYMBOL_STR(wakeup_irq_flag_function_rx) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0xe616e2f0, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x907ca689, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xc7ec6c27, __VMLINUX_SYMBOL_STR(strspn) },
	{ 0xee4f3181, __VMLINUX_SYMBOL_STR(wakeup_source_add) },
	{ 0x9b60db24, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x7777f64e, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x1525f36d, __VMLINUX_SYMBOL_STR(__pm_stay_awake) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x9aca444b, __VMLINUX_SYMBOL_STR(get_monotonic_boottime) },
	{ 0x40d5927b, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_frame) },
	{ 0x2653e861, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x64021802, __VMLINUX_SYMBOL_STR(uncached_logk) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x60352082, __VMLINUX_SYMBOL_STR(register_inet6addr_notifier) },
	{ 0x746b0f43, __VMLINUX_SYMBOL_STR(platform_bus_type) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x97cbcdf8, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0xb833ccb1, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0x4e830a3e, __VMLINUX_SYMBOL_STR(strnicmp) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xd91cba37, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x4cabed9, __VMLINUX_SYMBOL_STR(rfkill_register) },
	{ 0x7f60e837, __VMLINUX_SYMBOL_STR(__pm_wakeup_event) },
	{ 0xd13a95d, __VMLINUX_SYMBOL_STR(cfg80211_del_sta) },
	{ 0xe59888eb, __VMLINUX_SYMBOL_STR(cfg80211_unregister_wdev) },
	{ 0x7fe1a403, __VMLINUX_SYMBOL_STR(cfg80211_find_ie) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x3964264, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0xa06fc320, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe9f37f0, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xb48677a, __VMLINUX_SYMBOL_STR(__kfifo_init) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf593b274, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0x4d405db8, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x8ff8fcb9, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x735400ab, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xfcdb4034, __VMLINUX_SYMBOL_STR(wakeup_source_prepare) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xa084d29a, __VMLINUX_SYMBOL_STR(mmc_wait_for_req) },
	{ 0x2fe252cc, __VMLINUX_SYMBOL_STR(unregister_inet6addr_notifier) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xc45e47db, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x31c06e48, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0xc51bd180, __VMLINUX_SYMBOL_STR(sdio_writel) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9787e7ff, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0xc15ad36c, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x15a69c76, __VMLINUX_SYMBOL_STR(cfg80211_get_bss) },
	{ 0xaee36fe0, __VMLINUX_SYMBOL_STR(__pskb_copy) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x8ec68190, __VMLINUX_SYMBOL_STR(rfkill_alloc) },
	{ 0x27d82877, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x790e0519, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0xa49ae965, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x14d4a9c5, __VMLINUX_SYMBOL_STR(_change_bit) },
	{ 0xe9467c6a, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x292cc45a, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x73374c86, __VMLINUX_SYMBOL_STR(mmc_set_data_timeout) },
	{ 0xd4fa93ca, __VMLINUX_SYMBOL_STR(sdio_readl) },
	{ 0x9cc4f70a, __VMLINUX_SYMBOL_STR(register_pm_notifier) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb0e14d4a, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xc03bed7d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd0570342, __VMLINUX_SYMBOL_STR(cfg80211_connect_result) },
	{ 0xc6ef0086, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0x427d899b, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0xd9512457, __VMLINUX_SYMBOL_STR(wiphy_apply_custom_regulatory) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xd2863588, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xf8fda4ed, __VMLINUX_SYMBOL_STR(platform_driver_register) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xd1692339, __VMLINUX_SYMBOL_STR(bus_find_device) },
	{ 0x9195685d, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x310917fe, __VMLINUX_SYMBOL_STR(sort) },
	{ 0x27c5420e, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0x60d4919e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xaec216a9, __VMLINUX_SYMBOL_STR(dev_kfree_skb_any) },
	{ 0xf2fc7f6e, __VMLINUX_SYMBOL_STR(__pm_relax) },
	{ 0xd79b5a02, __VMLINUX_SYMBOL_STR(allow_signal) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x57852c4f, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xac1a55be, __VMLINUX_SYMBOL_STR(unregister_reboot_notifier) },
	{ 0x6d380b26, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xe8271f2c, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0x3677be69, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0xf6fba780, __VMLINUX_SYMBOL_STR(cfg80211_roamed) },
	{ 0x63a85d07, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0x975e594, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x8164504d, __VMLINUX_SYMBOL_STR(wiphy_new) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x8f5726a2, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0x3517383e, __VMLINUX_SYMBOL_STR(register_reboot_notifier) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0x855c61d6, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0xce14acd1, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x21338036, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0x1d6a7a21, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbe903689, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0x8e9379f8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0x528bc9e1, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xc6e81d1a, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0x7afa89fc, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x5432bf97, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0x445de180, __VMLINUX_SYMBOL_STR(sched_setscheduler) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x926d5d5d, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0xcc990ac2, __VMLINUX_SYMBOL_STR(sdio_writew) },
	{ 0x930825, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdb68bbad, __VMLINUX_SYMBOL_STR(rfkill_destroy) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x7681946c, __VMLINUX_SYMBOL_STR(unregister_pm_notifier) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x44353ee7, __VMLINUX_SYMBOL_STR(sdio_reset_comm) },
	{ 0x4c5729fe, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0xe33ff515, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb6dce3c3, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4ce490a9, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xc3dfbcf0, __VMLINUX_SYMBOL_STR(sdio_readw) },
	{ 0xa2c13b52, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xb8c0cf12, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x5cd7667d, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0x59d124fa, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xe8af8f13, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x7cb13f70, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x83eb21c, __VMLINUX_SYMBOL_STR(rfkill_unregister) },
	{ 0x70550635, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x3665ae6, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xfd9a2d2a, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x837d0f0a, __VMLINUX_SYMBOL_STR(down_timeout) },
	{ 0xe8fbde67, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0xed06b916, __VMLINUX_SYMBOL_STR(wakeup_source_drop) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xff5cda7c, __VMLINUX_SYMBOL_STR(wakeup_source_remove) },
	{ 0x4411c503, __VMLINUX_SYMBOL_STR(prandom_seed) },
	{ 0x6b6c0edf, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x898dc431, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x9b3376c6, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0x931793da, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0xe6366ce8, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_results) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c00v02D0d*");