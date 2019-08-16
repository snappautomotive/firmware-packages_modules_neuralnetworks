// Generated from bidirectional_sequence_lstm_norm_fw_output.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"

namespace generated_tests::bidirectional_sequence_lstm_norm_fw_output {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox() {
static std::vector<::test_helper::MixedTypedExample> examples_blackbox = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {3, 2, 5}}, {1, {4, 5}}, {2, {4, 5}}, {3, {4, 5}}, {4, {4, 5}}, {5, {4, 3}}, {6, {4, 3}}, {7, {4, 3}}, {8, {4, 3}}, {9, {4}}, {10, {4}}, {11, {4}}, {12, {4}}, {13, {4}}, {14, {4}}, {15, {4}}, {16, {3, 4}}, {17, {3}}, {18, {4, 5}}, {19, {4, 5}}, {20, {4, 5}}, {21, {4, 5}}, {22, {4, 3}}, {23, {4, 3}}, {24, {4, 3}}, {25, {4, 3}}, {26, {4}}, {27, {4}}, {28, {4}}, {29, {4}}, {30, {4}}, {31, {4}}, {32, {4}}, {33, {3, 4}}, {34, {3}}, {35, {2, 3}}, {36, {2, 4}}, {37, {2, 3}}, {38, {2, 4}}, {39, {3, 2, 5}}, {40, {4, 5}}, {41, {4, 5}}, {42, {4, 5}}, {43, {4, 5}}, {44, {4, 5}}, {45, {4, 5}}, {46, {4, 5}}, {47, {4, 5}}, {48, {4}}, {49, {4}}, {50, {4}}, {51, {4}}, {52, {4}}, {53, {4}}, {54, {4}}, {55, {4}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.7f, 0.8f, 0.1f, 0.2f, 0.3f, 0.3f, 0.2f, 0.9f, 0.8f, 0.1f, 0.8f, 0.1f, 0.2f, 0.4f, 0.5f, 0.1f, 0.5f, 0.2f, 0.4f, 0.2f, 0.2f, 0.7f, 0.7f, 0.1f, 0.7f, 0.6f, 0.9f, 0.2f, 0.5f, 0.7f}}, {1, {0.5f, 0.6f, 0.7f, -0.8f, -0.9f, 0.1f, 0.2f, 0.3f, -0.4f, 0.5f, -0.8f, 0.7f, -0.6f, 0.5f, -0.4f, -0.5f, -0.4f, -0.3f, -0.2f, -0.1f}}, {2, {-0.6f, -0.1f, 0.3f, 0.2f, 0.9f, -0.5f, -0.2f, -0.4f, 0.3f, -0.8f, -0.4f, 0.3f, -0.5f, -0.4f, -0.6f, 0.3f, -0.4f, -0.6f, -0.5f, -0.5f}}, {3, {-0.4f, -0.3f, -0.2f, -0.1f, -0.5f, 0.5f, -0.2f, -0.3f, -0.2f, -0.6f, 0.6f, -0.1f, -0.4f, -0.3f, -0.7f, 0.7f, -0.9f, -0.5f, 0.8f, 0.6f}}, {4, {-0.8f, -0.4f, -0.2f, -0.9f, -0.1f, -0.7f, 0.3f, -0.3f, -0.8f, -0.2f, 0.6f, -0.2f, 0.4f, -0.7f, -0.3f, -0.5f, 0.1f, 0.5f, -0.6f, -0.4f}}, {5, {-0.2f, -0.3f, 0.4f, 0.1f, -0.5f, 0.9f, -0.2f, -0.3f, -0.7f, 0.05f, -0.2f, -0.6f}}, {6, {-0.5f, -0.3f, -0.5f, -0.2f, 0.6f, 0.4f, 0.9f, 0.3f, -0.1f, 0.2f, 0.5f, 0.2f}}, {7, {-0.3f, 0.2f, 0.1f, -0.3f, 0.8f, -0.08f, -0.2f, 0.3f, 0.8f, -0.6f, -0.1f, 0.2f}}, {8, {0.3f, -0.1f, 0.1f, -0.2f, -0.5f, -0.7f, -0.2f, -0.6f, -0.1f, -0.4f, -0.7f, -0.2f}}, {9, {0.05f, 0.1f, 0.25f, 0.15f}}, {10, {-0.02f, -0.15f, -0.25f, -0.03f}}, {11, {0.1f, -0.1f, -0.5f, 0.05f}}, {12, {0.03f, 0.15f, 0.22f, 0.38f}}, {13, {0.1f, -0.3f, -0.2f, 0.1f}}, {14, {-0.05f, 0.72f, 0.25f, 0.08f}}, {15, {0.05f, -0.01f, 0.2f, 0.1f}}, {16, {-0.1f, 0.2f, 0.01f, -0.2f, 0.1f, 0.5f, 0.3f, 0.08f, 0.07f, 0.2f, -0.4f, 0.2f}}, {17, {}}, {18, {0.5f, 0.6f, 0.7f, -0.8f, -0.9f, 0.1f, 0.2f, 0.3f, -0.4f, 0.5f, -0.8f, 0.7f, -0.6f, 0.5f, -0.4f, -0.5f, -0.4f, -0.3f, -0.2f, -0.1f}}, {19, {-0.6f, -0.1f, 0.3f, 0.2f, 0.9f, -0.5f, -0.2f, -0.4f, 0.3f, -0.8f, -0.4f, 0.3f, -0.5f, -0.4f, -0.6f, 0.3f, -0.4f, -0.6f, -0.5f, -0.5f}}, {20, {-0.4f, -0.3f, -0.2f, -0.1f, -0.5f, 0.5f, -0.2f, -0.3f, -0.2f, -0.6f, 0.6f, -0.1f, -0.4f, -0.3f, -0.7f, 0.7f, -0.9f, -0.5f, 0.8f, 0.6f}}, {21, {-0.8f, -0.4f, -0.2f, -0.9f, -0.1f, -0.7f, 0.3f, -0.3f, -0.8f, -0.2f, 0.6f, -0.2f, 0.4f, -0.7f, -0.3f, -0.5f, 0.1f, 0.5f, -0.6f, -0.4f}}, {22, {-0.2f, -0.3f, 0.4f, 0.1f, -0.5f, 0.9f, -0.2f, -0.3f, -0.7f, 0.05f, -0.2f, -0.6f}}, {23, {-0.5f, -0.3f, -0.5f, -0.2f, 0.6f, 0.4f, 0.9f, 0.3f, -0.1f, 0.2f, 0.5f, 0.2f}}, {24, {-0.3f, 0.2f, 0.1f, -0.3f, 0.8f, -0.08f, -0.2f, 0.3f, 0.8f, -0.6f, -0.1f, 0.2f}}, {25, {0.3f, -0.1f, 0.1f, -0.2f, -0.5f, -0.7f, -0.2f, -0.6f, -0.1f, -0.4f, -0.7f, -0.2f}}, {26, {0.05f, 0.1f, 0.25f, 0.15f}}, {27, {-0.02f, -0.15f, -0.25f, -0.03f}}, {28, {0.1f, -0.1f, -0.5f, 0.05f}}, {29, {0.03f, 0.15f, 0.22f, 0.38f}}, {30, {0.1f, -0.3f, -0.2f, 0.1f}}, {31, {-0.05f, 0.72f, 0.25f, 0.08f}}, {32, {0.05f, -0.01f, 0.2f, 0.1f}}, {33, {-0.1f, 0.2f, 0.01f, -0.2f, 0.1f, 0.5f, 0.3f, 0.08f, 0.07f, 0.2f, -0.4f, 0.2f}}, {34, {}}, {35, {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}, {36, {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}, {37, {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}, {38, {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}, {39, {}}, {40, {}}, {41, {}}, {42, {}}, {43, {}}, {44, {}}, {45, {}}, {46, {}}, {47, {}}, {48, {0.1f, 0.2f, 0.3f, 0.5f}}, {49, {0.2f, 0.2f, 0.4f, 0.3f}}, {50, {0.7f, 0.2f, 0.3f, 0.8f}}, {51, {0.6f, 0.2f, 0.2f, 0.5f}}, {52, {0.1f, 0.2f, 0.3f, 0.5f}}, {53, {0.2f, 0.2f, 0.4f, 0.3f}}, {54, {0.7f, 0.2f, 0.3f, 0.8f}}, {55, {0.6f, 0.2f, 0.2f, 0.5f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {3, 2, 3}}, {1, {3, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.0244077f, 0.128027f, -0.00170918f, -0.00692428f, 0.0848741f, 0.063445f, 0.0137642f, 0.140751f, 0.0395835f, -0.00403912f, 0.139963f, 0.072681f, -0.00459231f, 0.155278f, 0.0837377f, 0.00752706f, 0.161903f, 0.0561371f}}, {1, {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
}
},
}, // End of an example
};
return examples_blackbox;
};

} // namespace generated_tests::bidirectional_sequence_lstm_norm_fw_output
namespace generated_tests::bidirectional_sequence_lstm_norm_fw_output {

std::vector<::test_helper::MixedTypedExample>& get_examples_blackbox_dynamic_output_shape() {
static std::vector<::test_helper::MixedTypedExample> examples_blackbox_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {3, 2, 5}}, {1, {4, 5}}, {2, {4, 5}}, {3, {4, 5}}, {4, {4, 5}}, {5, {4, 3}}, {6, {4, 3}}, {7, {4, 3}}, {8, {4, 3}}, {9, {4}}, {10, {4}}, {11, {4}}, {12, {4}}, {13, {4}}, {14, {4}}, {15, {4}}, {16, {3, 4}}, {17, {3}}, {18, {4, 5}}, {19, {4, 5}}, {20, {4, 5}}, {21, {4, 5}}, {22, {4, 3}}, {23, {4, 3}}, {24, {4, 3}}, {25, {4, 3}}, {26, {4}}, {27, {4}}, {28, {4}}, {29, {4}}, {30, {4}}, {31, {4}}, {32, {4}}, {33, {3, 4}}, {34, {3}}, {35, {2, 3}}, {36, {2, 4}}, {37, {2, 3}}, {38, {2, 4}}, {39, {3, 2, 5}}, {40, {4, 5}}, {41, {4, 5}}, {42, {4, 5}}, {43, {4, 5}}, {44, {4, 5}}, {45, {4, 5}}, {46, {4, 5}}, {47, {4, 5}}, {48, {4}}, {49, {4}}, {50, {4}}, {51, {4}}, {52, {4}}, {53, {4}}, {54, {4}}, {55, {4}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.7f, 0.8f, 0.1f, 0.2f, 0.3f, 0.3f, 0.2f, 0.9f, 0.8f, 0.1f, 0.8f, 0.1f, 0.2f, 0.4f, 0.5f, 0.1f, 0.5f, 0.2f, 0.4f, 0.2f, 0.2f, 0.7f, 0.7f, 0.1f, 0.7f, 0.6f, 0.9f, 0.2f, 0.5f, 0.7f}}, {1, {0.5f, 0.6f, 0.7f, -0.8f, -0.9f, 0.1f, 0.2f, 0.3f, -0.4f, 0.5f, -0.8f, 0.7f, -0.6f, 0.5f, -0.4f, -0.5f, -0.4f, -0.3f, -0.2f, -0.1f}}, {2, {-0.6f, -0.1f, 0.3f, 0.2f, 0.9f, -0.5f, -0.2f, -0.4f, 0.3f, -0.8f, -0.4f, 0.3f, -0.5f, -0.4f, -0.6f, 0.3f, -0.4f, -0.6f, -0.5f, -0.5f}}, {3, {-0.4f, -0.3f, -0.2f, -0.1f, -0.5f, 0.5f, -0.2f, -0.3f, -0.2f, -0.6f, 0.6f, -0.1f, -0.4f, -0.3f, -0.7f, 0.7f, -0.9f, -0.5f, 0.8f, 0.6f}}, {4, {-0.8f, -0.4f, -0.2f, -0.9f, -0.1f, -0.7f, 0.3f, -0.3f, -0.8f, -0.2f, 0.6f, -0.2f, 0.4f, -0.7f, -0.3f, -0.5f, 0.1f, 0.5f, -0.6f, -0.4f}}, {5, {-0.2f, -0.3f, 0.4f, 0.1f, -0.5f, 0.9f, -0.2f, -0.3f, -0.7f, 0.05f, -0.2f, -0.6f}}, {6, {-0.5f, -0.3f, -0.5f, -0.2f, 0.6f, 0.4f, 0.9f, 0.3f, -0.1f, 0.2f, 0.5f, 0.2f}}, {7, {-0.3f, 0.2f, 0.1f, -0.3f, 0.8f, -0.08f, -0.2f, 0.3f, 0.8f, -0.6f, -0.1f, 0.2f}}, {8, {0.3f, -0.1f, 0.1f, -0.2f, -0.5f, -0.7f, -0.2f, -0.6f, -0.1f, -0.4f, -0.7f, -0.2f}}, {9, {0.05f, 0.1f, 0.25f, 0.15f}}, {10, {-0.02f, -0.15f, -0.25f, -0.03f}}, {11, {0.1f, -0.1f, -0.5f, 0.05f}}, {12, {0.03f, 0.15f, 0.22f, 0.38f}}, {13, {0.1f, -0.3f, -0.2f, 0.1f}}, {14, {-0.05f, 0.72f, 0.25f, 0.08f}}, {15, {0.05f, -0.01f, 0.2f, 0.1f}}, {16, {-0.1f, 0.2f, 0.01f, -0.2f, 0.1f, 0.5f, 0.3f, 0.08f, 0.07f, 0.2f, -0.4f, 0.2f}}, {17, {}}, {18, {0.5f, 0.6f, 0.7f, -0.8f, -0.9f, 0.1f, 0.2f, 0.3f, -0.4f, 0.5f, -0.8f, 0.7f, -0.6f, 0.5f, -0.4f, -0.5f, -0.4f, -0.3f, -0.2f, -0.1f}}, {19, {-0.6f, -0.1f, 0.3f, 0.2f, 0.9f, -0.5f, -0.2f, -0.4f, 0.3f, -0.8f, -0.4f, 0.3f, -0.5f, -0.4f, -0.6f, 0.3f, -0.4f, -0.6f, -0.5f, -0.5f}}, {20, {-0.4f, -0.3f, -0.2f, -0.1f, -0.5f, 0.5f, -0.2f, -0.3f, -0.2f, -0.6f, 0.6f, -0.1f, -0.4f, -0.3f, -0.7f, 0.7f, -0.9f, -0.5f, 0.8f, 0.6f}}, {21, {-0.8f, -0.4f, -0.2f, -0.9f, -0.1f, -0.7f, 0.3f, -0.3f, -0.8f, -0.2f, 0.6f, -0.2f, 0.4f, -0.7f, -0.3f, -0.5f, 0.1f, 0.5f, -0.6f, -0.4f}}, {22, {-0.2f, -0.3f, 0.4f, 0.1f, -0.5f, 0.9f, -0.2f, -0.3f, -0.7f, 0.05f, -0.2f, -0.6f}}, {23, {-0.5f, -0.3f, -0.5f, -0.2f, 0.6f, 0.4f, 0.9f, 0.3f, -0.1f, 0.2f, 0.5f, 0.2f}}, {24, {-0.3f, 0.2f, 0.1f, -0.3f, 0.8f, -0.08f, -0.2f, 0.3f, 0.8f, -0.6f, -0.1f, 0.2f}}, {25, {0.3f, -0.1f, 0.1f, -0.2f, -0.5f, -0.7f, -0.2f, -0.6f, -0.1f, -0.4f, -0.7f, -0.2f}}, {26, {0.05f, 0.1f, 0.25f, 0.15f}}, {27, {-0.02f, -0.15f, -0.25f, -0.03f}}, {28, {0.1f, -0.1f, -0.5f, 0.05f}}, {29, {0.03f, 0.15f, 0.22f, 0.38f}}, {30, {0.1f, -0.3f, -0.2f, 0.1f}}, {31, {-0.05f, 0.72f, 0.25f, 0.08f}}, {32, {0.05f, -0.01f, 0.2f, 0.1f}}, {33, {-0.1f, 0.2f, 0.01f, -0.2f, 0.1f, 0.5f, 0.3f, 0.08f, 0.07f, 0.2f, -0.4f, 0.2f}}, {34, {}}, {35, {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}, {36, {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}, {37, {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}, {38, {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}, {39, {}}, {40, {}}, {41, {}}, {42, {}}, {43, {}}, {44, {}}, {45, {}}, {46, {}}, {47, {}}, {48, {0.1f, 0.2f, 0.3f, 0.5f}}, {49, {0.2f, 0.2f, 0.4f, 0.3f}}, {50, {0.7f, 0.2f, 0.3f, 0.8f}}, {51, {0.6f, 0.2f, 0.2f, 0.5f}}, {52, {0.1f, 0.2f, 0.3f, 0.5f}}, {53, {0.2f, 0.2f, 0.4f, 0.3f}}, {54, {0.7f, 0.2f, 0.3f, 0.8f}}, {55, {0.6f, 0.2f, 0.2f, 0.5f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {3, 2, 3}}, {1, {3, 2, 3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.0244077f, 0.128027f, -0.00170918f, -0.00692428f, 0.0848741f, 0.063445f, 0.0137642f, 0.140751f, 0.0395835f, -0.00403912f, 0.139963f, 0.072681f, -0.00459231f, 0.155278f, 0.0837377f, 0.00752706f, 0.161903f, 0.0561371f}}, {1, {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}}},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
}
},
}, // End of an example
};
return examples_blackbox_dynamic_output_shape;
};

} // namespace generated_tests::bidirectional_sequence_lstm_norm_fw_output