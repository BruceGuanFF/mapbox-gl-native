#pragma once

#include <mbgl/renderer/tile_mask.hpp>
#include <mbgl/renderer/indexed_primitives.hpp>
#include <mbgl/renderer/drawable.hpp>
#include <mbgl/gl/draw_mode.hpp>
#include <mbgl/programs/raster_program.hpp>

namespace mbgl {

namespace gl {
class Context;
} // namespace gl

class TileMaskRepository {
public:
    const Drawable<gl::Triangles, RasterLayoutVertex, RasterAttributes>&
    getDrawable(gl::Context&, const TileMask&);

    void clear();

    static IndexedPrimitives<gl::Triangles, RasterLayoutVertex, RasterAttributes>
    getPrimitives(const TileMask&);

private:
    std::map<TileMask, const Drawable<gl::Triangles, RasterLayoutVertex, RasterAttributes>> drawables;
};

} // namespace mbgl
