// Generated from tile_2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"

using namespace test_helper;

namespace generated_tests::tile_2 {

const TestModel& get_test_model() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({2, 1}),
                .dimensions = {2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f, 11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f}),
                .dimensions = {4, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::TILE
            }},
        .outputIndexes = {2}
    };
    return model;
}

}  // namespace generated_tests::tile_2

namespace generated_tests::tile_2 {

const TestModel& get_test_model_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {1, 3},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({2, 1}),
                .dimensions = {2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f, 11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f}),
                .dimensions = {4, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {3, 4, 5},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::TILE
            }},
        .outputIndexes = {2}
    };
    return model;
}

}  // namespace generated_tests::tile_2

namespace generated_tests::tile_2 {

const TestModel& get_test_model_relaxed() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({2, 1}),
                .dimensions = {2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f, 11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f}),
                .dimensions = {4, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::TILE
            }},
        .outputIndexes = {2}
    };
    return model;
}

}  // namespace generated_tests::tile_2

namespace generated_tests::tile_2 {

const TestModel& get_test_model_relaxed_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {1, 3},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({2, 1}),
                .dimensions = {2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f, 11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f}),
                .dimensions = {4, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {3, 4, 5},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::TILE
            }},
        .outputIndexes = {2}
    };
    return model;
}

}  // namespace generated_tests::tile_2

namespace generated_tests::tile_2 {

const TestModel& get_test_model_float16() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({2, 1}),
                .dimensions = {2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f, 11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f}),
                .dimensions = {4, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::TILE
            }},
        .outputIndexes = {2}
    };
    return model;
}

}  // namespace generated_tests::tile_2

namespace generated_tests::tile_2 {

const TestModel& get_test_model_float16_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {1, 3},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({2, 1}),
                .dimensions = {2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f, 11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f}),
                .dimensions = {4, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({11.0f, 12.0f, 13.0f, 21.0f, 22.0f, 23.0f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {3, 4, 5},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::TILE
            }},
        .outputIndexes = {2}
    };
    return model;
}

}  // namespace generated_tests::tile_2

namespace generated_tests::tile_2 {

const TestModel& get_test_model_quant8() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({149, 151, 153, 169, 171, 173}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.5f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 127
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({2, 1}),
                .dimensions = {2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({149, 151, 153, 169, 171, 173, 149, 151, 153, 169, 171, 173}),
                .dimensions = {4, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.5f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 127
            }},
        .operations = {{
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::TILE
            }},
        .outputIndexes = {2}
    };
    return model;
}

}  // namespace generated_tests::tile_2

namespace generated_tests::tile_2 {

const TestModel& get_test_model_quant8_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {1, 3},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.5f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 127
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({2, 1}),
                .dimensions = {2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({149, 151, 153, 169, 171, 173, 149, 151, 153, 169, 171, 173}),
                .dimensions = {4, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.5f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 127
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({149, 151, 153, 169, 171, 173}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.5f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 127
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({127}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.5f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 127
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {3, 4, 5},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::TILE
            }},
        .outputIndexes = {2}
    };
    return model;
}

}  // namespace generated_tests::tile_2

namespace generated_tests::tile_2 {

const TestModel& get_test_model_int32() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({11, 12, 13, 21, 22, 23}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({2, 1}),
                .dimensions = {2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({11, 12, 13, 21, 22, 23, 11, 12, 13, 21, 22, 23}),
                .dimensions = {4, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::TILE
            }},
        .outputIndexes = {2}
    };
    return model;
}

}  // namespace generated_tests::tile_2
