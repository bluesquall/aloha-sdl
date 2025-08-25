# aloha SDL2
> a demo repository using Simple DirectMedia Layer (SDL)

## build
This demo uses the `meson` build system[^i].
```
meson setup /tmp/build
meson compile -C /tmp/build
```

## troubleshooting
### meson version is too old
You aren't likely to experience this issue for the code that is actually
in this repository, but it may come up for dependencies installed via
`meson wrap install x`, e.g.:
```
... subprojects/SDL2-2.32.8/meson.build:1:0: ERROR: Meson version is 0.61.2 but project requires >=0.63
```
To fix this, it is easiest to install `meson` via `pip` rather than your
package manager, i.e.,
```
pip3 install --user meson
```
_____________

[meson-gui-tutorial]: https://mesonbuild.com/GuiTutorial.html

_____________
[^i]: In fact, the [GUI tutorial section][meson-gui-tutorial] of the
  `meson` website is what prompted me to finally try building something
  with SDL2.
