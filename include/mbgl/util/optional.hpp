#pragma once

#include <experimental/optional>

namespace mbgl {

template <typename T>
using optional = std::experimental::optional<T>;

using std::experimental::nullopt_t;
constexpr nullopt_t nullopt = std::experimental::nullopt;

} // namespace mbgl
