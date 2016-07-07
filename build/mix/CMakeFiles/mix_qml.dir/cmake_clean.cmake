file(REMOVE_RECURSE
  "mix-ide_automoc.cpp"
)

# Per-language clean rules from dependency scanning.
foreach(lang)
  include(CMakeFiles/mix_qml.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
