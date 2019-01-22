// clang-format off
// Generated file (from: generate_proposals.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace generate_proposals {
// Generated generate_proposals test
#include "generated/examples/generate_proposals.example.cpp"
// Generated model constructor
#include "generated/models/generate_proposals.model.cpp"
} // namespace generate_proposals

TEST_F(GeneratedTests, generate_proposals_nhwc) {
    execute(generate_proposals::CreateModel_nhwc,
            generate_proposals::is_ignored_nhwc,
            generate_proposals::get_examples_nhwc());
}

TEST_F(GeneratedTests, generate_proposals_nhwc_relaxed) {
    execute(generate_proposals::CreateModel_nhwc_relaxed,
            generate_proposals::is_ignored_nhwc_relaxed,
            generate_proposals::get_examples_nhwc_relaxed());
}

TEST_F(GeneratedTests, generate_proposals_nhwc_float16) {
    execute(generate_proposals::CreateModel_nhwc_float16,
            generate_proposals::is_ignored_nhwc_float16,
            generate_proposals::get_examples_nhwc_float16());
}

TEST_F(GeneratedTests, generate_proposals_nchw) {
    execute(generate_proposals::CreateModel_nchw,
            generate_proposals::is_ignored_nchw,
            generate_proposals::get_examples_nchw());
}

TEST_F(GeneratedTests, generate_proposals_nchw_relaxed) {
    execute(generate_proposals::CreateModel_nchw_relaxed,
            generate_proposals::is_ignored_nchw_relaxed,
            generate_proposals::get_examples_nchw_relaxed());
}

TEST_F(GeneratedTests, generate_proposals_nchw_float16) {
    execute(generate_proposals::CreateModel_nchw_float16,
            generate_proposals::is_ignored_nchw_float16,
            generate_proposals::get_examples_nchw_float16());
}

#if 0
TEST_F(DynamicOutputShapeTests, generate_proposals_dynamic_output_shape_nhwc) {
    execute(generate_proposals::CreateModel_dynamic_output_shape_nhwc,
            generate_proposals::is_ignored_dynamic_output_shape_nhwc,
            generate_proposals::get_examples_dynamic_output_shape_nhwc());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, generate_proposals_dynamic_output_shape_nhwc_relaxed) {
    execute(generate_proposals::CreateModel_dynamic_output_shape_nhwc_relaxed,
            generate_proposals::is_ignored_dynamic_output_shape_nhwc_relaxed,
            generate_proposals::get_examples_dynamic_output_shape_nhwc_relaxed());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, generate_proposals_dynamic_output_shape_nhwc_float16) {
    execute(generate_proposals::CreateModel_dynamic_output_shape_nhwc_float16,
            generate_proposals::is_ignored_dynamic_output_shape_nhwc_float16,
            generate_proposals::get_examples_dynamic_output_shape_nhwc_float16());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, generate_proposals_dynamic_output_shape_nchw) {
    execute(generate_proposals::CreateModel_dynamic_output_shape_nchw,
            generate_proposals::is_ignored_dynamic_output_shape_nchw,
            generate_proposals::get_examples_dynamic_output_shape_nchw());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, generate_proposals_dynamic_output_shape_nchw_relaxed) {
    execute(generate_proposals::CreateModel_dynamic_output_shape_nchw_relaxed,
            generate_proposals::is_ignored_dynamic_output_shape_nchw_relaxed,
            generate_proposals::get_examples_dynamic_output_shape_nchw_relaxed());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, generate_proposals_dynamic_output_shape_nchw_float16) {
    execute(generate_proposals::CreateModel_dynamic_output_shape_nchw_float16,
            generate_proposals::is_ignored_dynamic_output_shape_nchw_float16,
            generate_proposals::get_examples_dynamic_output_shape_nchw_float16());
}

#endif
TEST_F(GeneratedTests, generate_proposals_nhwc_2) {
    execute(generate_proposals::CreateModel_nhwc_2,
            generate_proposals::is_ignored_nhwc_2,
            generate_proposals::get_examples_nhwc_2());
}

TEST_F(GeneratedTests, generate_proposals_nhwc_relaxed_2) {
    execute(generate_proposals::CreateModel_nhwc_relaxed_2,
            generate_proposals::is_ignored_nhwc_relaxed_2,
            generate_proposals::get_examples_nhwc_relaxed_2());
}

TEST_F(GeneratedTests, generate_proposals_nhwc_float16_2) {
    execute(generate_proposals::CreateModel_nhwc_float16_2,
            generate_proposals::is_ignored_nhwc_float16_2,
            generate_proposals::get_examples_nhwc_float16_2());
}

TEST_F(GeneratedTests, generate_proposals_nchw_2) {
    execute(generate_proposals::CreateModel_nchw_2,
            generate_proposals::is_ignored_nchw_2,
            generate_proposals::get_examples_nchw_2());
}

TEST_F(GeneratedTests, generate_proposals_nchw_relaxed_2) {
    execute(generate_proposals::CreateModel_nchw_relaxed_2,
            generate_proposals::is_ignored_nchw_relaxed_2,
            generate_proposals::get_examples_nchw_relaxed_2());
}

TEST_F(GeneratedTests, generate_proposals_nchw_float16_2) {
    execute(generate_proposals::CreateModel_nchw_float16_2,
            generate_proposals::is_ignored_nchw_float16_2,
            generate_proposals::get_examples_nchw_float16_2());
}

#if 0
TEST_F(DynamicOutputShapeTests, generate_proposals_dynamic_output_shape_nhwc_2) {
    execute(generate_proposals::CreateModel_dynamic_output_shape_nhwc_2,
            generate_proposals::is_ignored_dynamic_output_shape_nhwc_2,
            generate_proposals::get_examples_dynamic_output_shape_nhwc_2());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, generate_proposals_dynamic_output_shape_nhwc_relaxed_2) {
    execute(generate_proposals::CreateModel_dynamic_output_shape_nhwc_relaxed_2,
            generate_proposals::is_ignored_dynamic_output_shape_nhwc_relaxed_2,
            generate_proposals::get_examples_dynamic_output_shape_nhwc_relaxed_2());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, generate_proposals_dynamic_output_shape_nhwc_float16_2) {
    execute(generate_proposals::CreateModel_dynamic_output_shape_nhwc_float16_2,
            generate_proposals::is_ignored_dynamic_output_shape_nhwc_float16_2,
            generate_proposals::get_examples_dynamic_output_shape_nhwc_float16_2());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, generate_proposals_dynamic_output_shape_nchw_2) {
    execute(generate_proposals::CreateModel_dynamic_output_shape_nchw_2,
            generate_proposals::is_ignored_dynamic_output_shape_nchw_2,
            generate_proposals::get_examples_dynamic_output_shape_nchw_2());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, generate_proposals_dynamic_output_shape_nchw_relaxed_2) {
    execute(generate_proposals::CreateModel_dynamic_output_shape_nchw_relaxed_2,
            generate_proposals::is_ignored_dynamic_output_shape_nchw_relaxed_2,
            generate_proposals::get_examples_dynamic_output_shape_nchw_relaxed_2());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, generate_proposals_dynamic_output_shape_nchw_float16_2) {
    execute(generate_proposals::CreateModel_dynamic_output_shape_nchw_float16_2,
            generate_proposals::is_ignored_dynamic_output_shape_nchw_float16_2,
            generate_proposals::get_examples_dynamic_output_shape_nchw_float16_2());
}

#endif
