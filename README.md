# aloha SDL2
> a demo repository using Simple DirectMedia Layer (SDL)

## build
This demo uses the `meson` build system[^i].
```
meson setup /tmp/build
meson compile -C /tmp/build
```
_____________

[meson-gui-tutorial]: https://mesonbuild.com/GuiTutorial.html

_____________
[^i]: In fact, the [GUI tutorial section][meson-gui-tutorial] of the
  `meson` website is what prompted me to finally try building something
  with SDL2.
