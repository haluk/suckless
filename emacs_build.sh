#!/usr/bin/env bash

git clone https://git.savannah.gnu.org/git/emacs.git

export CFLAGS+=" -g3 -O2 -flto -march=native"
export CXXFLAGS+=" -g3 -O2 -flto -march=native"


# Disabled
#--with-xwidgets

./configure \
    --prefix="$HOME"/.local/build/emacs/usr \
    --sysconfdir="$HOME"/.local/build/emacs/etc \
    --libexecdir="$HOME"/.local/build/emacs/usr/lib \
    --localstatedir="$HOME"/.local/build/emacs/var \
    --mandir="$HOME"/.local/build/emacs/usr/share/man \
    --with-gameuser=:games \
    --with-sound=alsa \
    --with-modules \
    --without-gconf \
    --without-gsettings \
    --with-dbus \
    --with-libsystemd \
    --with-gif \
    --with-jpeg \
    --with-png \
    --with-rsvg \
    --with-xpm \
    --with-tiff \
    --with-xft \
    --with-mailutils \
    --with-json \
    --with-gnutls \
    --with-xml2 \
    --with-gpm=yes \
    --with-threads \
    --with-included-regex \
    --with-zlib \
    --with-libsystemd \
    --without-imagemagick \
    --enable-link-time-optimization \
    --with-native-compilation \
    --with-x-toolkit=gtk3 \
    --without-xaw3d \
    --without-compress-install \
    --program-transform-name='s/\([ec]tags\)/\1.emacs/' 

 make -j$(nproc)
