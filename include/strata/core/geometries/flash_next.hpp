// include/strata/core/geometries/flash_next.hpp - Qwen3.8-Flash-Next (qwen4exp), the shape the engine ships for.
// The values are ModelGeometry's member defaults (geometry.hpp); this header exists so that every shape is a header,
// and so that the default build is byte-for-byte the build it was before shapes were selectable.
#pragma once

namespace strata::core {

#if defined(STRATA_GEOMETRY_FLASH_NEXT_AZ)
inline constexpr const char* kGeometryName = "flash_next_az";
inline constexpr ModelGeometry kCompiledGeometry = [] {
    ModelGeometry g;
    g.n_expert_used = 5;
    g.n_ff_shexp = 1280;
    return g;
}();
#else
inline constexpr const char* kGeometryName = "flash_next";
inline constexpr ModelGeometry kCompiledGeometry{};
#endif

}  // namespace strata::core
