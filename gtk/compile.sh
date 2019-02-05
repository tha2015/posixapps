#!/usr/bin/env sh

# linux
#sudo apt-get install pkg-config
#sudo apt-get install libgtk-3-dev

# cygwin
# - install xorg-server and xinit
# xinit -- -multiwindow -clipboard &
# run app

# msys2
# see http://blog.latepaul.com/glade-gtk-on-windows-with-msys2

gcc `pkg-config --cflags gtk+-3.0` -o hello main.c `pkg-config --libs gtk+-3.0`

#make
