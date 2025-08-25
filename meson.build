project('aloha-sdl', 'c',
  default_options: 'default_library=static')

sdl2_dep = dependency('sdl2')

executable('aloha-sdl', 'src/aloha-sdl.c',
  win_subsystem: 'windows', 
  dependencies: sdl2_dep)
