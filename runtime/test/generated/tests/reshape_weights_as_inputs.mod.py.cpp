// Generated from reshape_weights_as_inputs.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::reshape_weights_as_inputs {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, reshape_weights_as_inputs) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::reshape_weights_as_inputs
TEST_AVAILABLE_SINCE(V1_0, reshape_weights_as_inputs, generated_tests::reshape_weights_as_inputs::CreateModel)

namespace generated_tests::reshape_weights_as_inputs {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, reshape_weights_as_inputs_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::reshape_weights_as_inputs
