project('LABO5', 'c')

# Busca la librería cjson en el sistema (requerida)
cjson_dep = dependency('cjson', required : true)

executable('labo5',
  sources : ['src/main.c', 'src/json.c'],
  dependencies : cjson_dep,
)

