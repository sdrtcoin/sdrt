
Debian
====================
This directory contains files used to package sdrtd/sdrt-qt
for Debian-based Linux systems. If you compile sdrtd/sdrt-qt yourself, there are some useful files here.

## sdrt: URI support ##


sdrt-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install sdrt-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your sdrt-qt binary to `/usr/bin`
and the `../../share/pixmaps/sdrt128.png` to `/usr/share/pixmaps`

sdrt-qt.protocol (KDE)

