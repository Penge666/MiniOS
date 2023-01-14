实现free函数。

root@ubuntu:/home/cooiboi/bochs# tree -a
.
├── bin
│   ├── bochs
│   └── bximage
├── bochs.out
├── boot
│   ├── bochsrc.disk
│   ├── hd60M.img
│   ├── loader.bin
│   ├── loader.S
│   ├── mbr.bin
│   └── mbr.S
├── build
│   ├── bitmap.o
│   ├── console.o
│   ├── debug.o
│   ├── init.o
│   ├── interrupt.o
│   ├── ioqueue.o
│   ├── kernel.bin
│   ├── kernel.map
│   ├── kernel.o
│   ├── keyboard.o
│   ├── list.o
│   ├── main.o
│   ├── memory.o
│   ├── print.o
│   ├── process.o
│   ├── stdio.o
│   ├── string.o
│   ├── switch.o
│   ├── sync.o
│   ├── syscall-init.o
│   ├── syscall.o
│   ├── thread.o
│   ├── timer.o
│   └── tss.o
├── device
│   ├── console.c
│   ├── console.h
│   ├── ioqueue.c
│   ├── ioqueue.h
│   ├── keyboard.c
│   ├── keyboard.h
│   ├── timer.c
│   └── timer.h
├── include
│   └── boot.inc
├── kernel
│   ├── debug.c
│   ├── debug.h
│   ├── global.h
│   ├── init.c
│   ├── init.h
│   ├── interrupt.c
│   ├── interrupt.h
│   ├── kernel.h
│   ├── kernel.S
│   ├── main.c
│   ├── memory.c
│   └── memory.h
├── lib
│   ├── kernel
│   │   ├── bitmap.c
│   │   ├── bitmap.h
│   │   ├── io.h
│   │   ├── list.c
│   │   ├── list.h
│   │   ├── print.h
│   │   └── print.S
│   ├── stdint.h
│   ├── stdio.c
│   ├── stdio.h
│   ├── string.c
│   ├── string.h
│   └── user
│       ├── syscall.c
│       └── syscall.h
├── makefile
├── share
│   ├── bochs
│   │   ├── bios.bin-1.7.5
│   │   ├── BIOS-bochs-latest
│   │   ├── BIOS-bochs-legacy
│   │   ├── keymaps
│   │   │   ├── sdl2-pc-de.map
│   │   │   ├── sdl2-pc-us.map
│   │   │   ├── sdl-pc-de.map
│   │   │   ├── sdl-pc-us.map
│   │   │   ├── x11-pc-be.map
│   │   │   ├── x11-pc-da.map
│   │   │   ├── x11-pc-de.map
│   │   │   ├── x11-pc-es.map
│   │   │   ├── x11-pc-fr.map
│   │   │   ├── x11-pc-it.map
│   │   │   ├── x11-pc-ru.map
│   │   │   ├── x11-pc-se.map
│   │   │   ├── x11-pc-si.map
│   │   │   ├── x11-pc-uk.map
│   │   │   └── x11-pc-us.map
│   │   ├── SeaBIOS-README
│   │   ├── VGABIOS-elpin-2.40
│   │   ├── VGABIOS-elpin-LICENSE
│   │   ├── VGABIOS-lgpl-latest
│   │   ├── VGABIOS-lgpl-latest-cirrus
│   │   ├── VGABIOS-lgpl-latest-cirrus-debug
│   │   ├── VGABIOS-lgpl-latest-debug
│   │   └── VGABIOS-lgpl-README
│   ├── doc
│   │   └── bochs
│   │       ├── bochsrc-sample.txt
│   │       ├── CHANGES
│   │       ├── COPYING
│   │       ├── LICENSE
│   │       ├── README
│   │       ├── slirp.conf
│   │       └── TODO
│   └── man
│       ├── man1
│       │   ├── bochs.1.gz
│       │   ├── bochs-dlx.1.gz
│       │   └── bximage.1.gz
│       └── man5
│           └── bochsrc.5.gz
├── thread
│   ├── switch.S
│   ├── sync.c
│   ├── sync.h
│   ├── thread.c
│   └── thread.h
└── userprog
    ├── process.c
    ├── process.h
    ├── syscall-init.c
    ├── syscall-init.h
    ├── tss.c
    └── tss.h