cmd_/work/psl/SF/release/cm-2.0.0/linux-cortexm-2.0.0/A2F/root/usr//include/linux/hsi/.install := /bin/sh scripts/headers_install.sh /work/psl/SF/release/cm-2.0.0/linux-cortexm-2.0.0/A2F/root/usr//include/linux/hsi ./include/uapi/linux/hsi cs-protocol.h hsi_char.h; /bin/sh scripts/headers_install.sh /work/psl/SF/release/cm-2.0.0/linux-cortexm-2.0.0/A2F/root/usr//include/linux/hsi ./include/linux/hsi ; /bin/sh scripts/headers_install.sh /work/psl/SF/release/cm-2.0.0/linux-cortexm-2.0.0/A2F/root/usr//include/linux/hsi ./include/generated/uapi/linux/hsi ; for F in ; do echo "\#include <asm-generic/$$F>" > /work/psl/SF/release/cm-2.0.0/linux-cortexm-2.0.0/A2F/root/usr//include/linux/hsi/$$F; done; touch /work/psl/SF/release/cm-2.0.0/linux-cortexm-2.0.0/A2F/root/usr//include/linux/hsi/.install