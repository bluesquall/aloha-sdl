project('aloha-sdl', 'c',
  default_options: 'default_library=static')

sdl3_dep = dependency('sdl3')

executable('aloha-sdl', 'src/aloha-sdl.c',
  win_subsystem: 'windows',
  dependencies: sdl3_dep)
