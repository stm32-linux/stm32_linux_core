/* This is a generated file, don't edit */

#define NUM_APPLETS 85

const char applet_names[] ALIGN1 = ""
"[" "\0"
"[[" "\0"
"basename" "\0"
"bash" "\0"
"cat" "\0"
"chmod" "\0"
"chown" "\0"
"cp" "\0"
"cttyhack" "\0"
"date" "\0"
"dd" "\0"
"devmem" "\0"
"df" "\0"
"dmesg" "\0"
"dnsdomainname" "\0"
"echo" "\0"
"env" "\0"
"false" "\0"
"fdisk" "\0"
"flash_eraseall" "\0"
"flashcp" "\0"
"ftpd" "\0"
"ftpget" "\0"
"ftpput" "\0"
"halt" "\0"
"hostname" "\0"
"httpd" "\0"
"hush" "\0"
"hwclock" "\0"
"ifconfig" "\0"
"init" "\0"
"kill" "\0"
"killall" "\0"
"killall5" "\0"
"ln" "\0"
"login" "\0"
"ls" "\0"
"lsusb" "\0"
"mdev" "\0"
"mesg" "\0"
"mkdir" "\0"
"mknod" "\0"
"more" "\0"
"mount" "\0"
"mv" "\0"
"netstat" "\0"
"nice" "\0"
"nslookup" "\0"
"ntpd" "\0"
"pgrep" "\0"
"pidof" "\0"
"ping" "\0"
"pkill" "\0"
"poweroff" "\0"
"ps" "\0"
"pwd" "\0"
"readlink" "\0"
"reboot" "\0"
"rm" "\0"
"route" "\0"
"run-parts" "\0"
"rx" "\0"
"sh" "\0"
"sleep" "\0"
"stty" "\0"
"sync" "\0"
"sysctl" "\0"
"tee" "\0"
"telnet" "\0"
"telnetd" "\0"
"test" "\0"
"tftp" "\0"
"time" "\0"
"traceroute" "\0"
"true" "\0"
"ubiattach" "\0"
"ubidetach" "\0"
"udhcpc" "\0"
"umount" "\0"
"usleep" "\0"
"uudecode" "\0"
"uuencode" "\0"
"vi" "\0"
"wc" "\0"
"wget" "\0"
;

#ifndef SKIP_applet_main
int (*const applet_main[])(int argc, char **argv) = {
test_main,
test_main,
basename_main,
hush_main,
cat_main,
chmod_main,
chown_main,
cp_main,
cttyhack_main,
date_main,
dd_main,
devmem_main,
df_main,
dmesg_main,
hostname_main,
echo_main,
env_main,
false_main,
fdisk_main,
flash_eraseall_main,
flashcp_main,
ftpd_main,
ftpgetput_main,
ftpgetput_main,
halt_main,
hostname_main,
httpd_main,
hush_main,
hwclock_main,
ifconfig_main,
init_main,
kill_main,
kill_main,
kill_main,
ln_main,
login_main,
ls_main,
lsusb_main,
mdev_main,
mesg_main,
mkdir_main,
mknod_main,
more_main,
mount_main,
mv_main,
netstat_main,
nice_main,
nslookup_main,
ntpd_main,
pgrep_main,
pidof_main,
ping_main,
pgrep_main,
halt_main,
ps_main,
pwd_main,
readlink_main,
halt_main,
rm_main,
route_main,
run_parts_main,
rx_main,
hush_main,
sleep_main,
stty_main,
sync_main,
sysctl_main,
tee_main,
telnet_main,
telnetd_main,
test_main,
tftp_main,
time_main,
traceroute_main,
true_main,
ubi_attach_detach_main,
ubi_attach_detach_main,
udhcpc_main,
umount_main,
usleep_main,
uudecode_main,
uuencode_main,
vi_main,
wc_main,
wget_main,
};
#endif

const uint16_t applet_nameofs[] ALIGN2 = {
0x0000,
0x0002,
0x0005,
0x000e,
0x0013,
0x0017,
0x001d,
0x0023,
0x0026,
0x002f,
0x0034,
0x0037,
0x003e,
0x0041,
0x0047,
0x0055,
0x005a,
0x005e,
0x0064,
0x006a,
0x0079,
0x0081,
0x0086,
0x008d,
0x0094,
0x0099,
0x00a2,
0x00a8,
0x00ad,
0x00b5,
0x00be,
0x00c3,
0x00c8,
0x00d0,
0x00d9,
0x80dc,
0x00e2,
0x00e5,
0x00eb,
0x00f0,
0x00f5,
0x00fb,
0x0101,
0x0106,
0x010c,
0x010f,
0x0117,
0x011c,
0x0125,
0x012a,
0x0130,
0x4136,
0x013b,
0x0141,
0x014a,
0x014d,
0x0151,
0x015a,
0x0161,
0x0164,
0x016a,
0x0174,
0x0177,
0x017a,
0x0180,
0x0185,
0x018a,
0x0191,
0x0195,
0x019c,
0x01a4,
0x01a9,
0x01ae,
0x41b3,
0x01be,
0x01c3,
0x01cd,
0x01d7,
0x01de,
0x01e5,
0x01ec,
0x01f5,
0x01fe,
0x0201,
0x0204,
};

const uint8_t applet_install_loc[] ALIGN1 = {
0x33,
0x13,
0x11,
0x11,
0x11,
0x21,
0x11,
0x11,
0x13,
0x42,
0x44,
0x33,
0x12,
0x14,
0x22,
0x12,
0x33,
0x11,
0x31,
0x32,
0x11,
0x11,
0x11,
0x31,
0x34,
0x11,
0x23,
0x11,
0x23,
0x21,
0x31,
0x11,
0x11,
0x32,
0x43,
0x33,
0x33,
0x41,
0x24,
0x11,
0x33,
0x31,
0x03,
};

#define MAX_APPLET_NAME_LEN 14
