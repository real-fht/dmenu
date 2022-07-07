<h1 align=center>real-fht's dmenu (Dynamic Menu) fork.</h1>

Nothing interesting to say about this, here's the install steps:

```sh
# Gentoo dependency install.
emerge --ask x11-libs/libX11 x11-libs/libXft 
emerge --ask media-fonts/jetbrains-mono # Optional, the default font.

# Install dmenu.
git clone https://github.com/real-fht/dmenu
cd dmenu && make install && make clean
```
