#!/bin/sh
set -e
. ./build.sh

mkdir -p isodir
mkdir -p isodir/boot
mkdir -p isodir/boot/grub

cp sysroot/boot/myos.kernel isodir/boot/myos.kernel
cat > isodir/boot/grub/grub.cfg << EOF
menuentry "Xenia 0.0.1.0" {
	multiboot /boot/myos.kernel
}
EOF
grub-mkrescue -o myos.iso isodir
