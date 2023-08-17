#ifndef YAML_CPP_INCLUDE_YAML_CPP_YAML_H
#define YAML_CPP_INCLUDE_YAML_CPP_YAML_H

#if defined(_MSC_VER) ||                                            \
    (defined(__GNUC__) && (__GNUC__ == 3 && __GNUC_MINOR__ >= 4) || \
     (__GNUC__ >= 4))  // GCC supports "pragma once" correctly since 3.4
#pragma once
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"

#include "yaml-cpp/emitter.h"
#include "yaml-cpp/emitterstyle.h"
#include "yaml-cpp/exceptions.h"
#include "yaml-cpp/parser.h"
#include "yaml-cpp/stlemitter.h"

#include "yaml-cpp/node/convert.h"
#include "yaml-cpp/node/detail/impl.h"
#include "yaml-cpp/node/emit.h"
#include "yaml-cpp/node/impl.h"
#include "yaml-cpp/node/iterator.h"
#include "yaml-cpp/node/node.h"
#include "yaml-cpp/node/parse.h"

#pragma GCC diagnostic pop

#endif  // YAML_CPP_INCLUDE_YAML_CPP_YAML_H
