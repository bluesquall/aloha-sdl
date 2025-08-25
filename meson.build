project('aloha-sdl', 'c',
  default_options: 'default_library=static')

sdl3_dep = dependency('sdl3')

executable('aloha-sdl', 'src/aloha-sdl.c',
  win_subsystem: 'windows',
  dependencies: sdl3_dep)
executable('renderer-01-clear', 'src/example/renderer/01-clear.c',
  win_subsystem: 'windows',
  dependencies: sdl3_dep)
