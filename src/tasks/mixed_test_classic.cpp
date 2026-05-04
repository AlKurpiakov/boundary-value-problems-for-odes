#include "tasks/mixed_test_classic.hpp"

#include "task_utils.hpp"

TaskResult runMixedTestClassicTask(const InputData& /*input*/, const VariantData& /*variant*/) {
    return makeTaskStub(
        "mixed-test-classic",
        "Смешанная краевая тестовая задача, классическая аппроксимация ГУ",
        "3. Смешанная тест.",
        "Смешанные граничные условия",
        "Классическая аппроксимация граничных условий",
        "Исполнитель 3",
        makeTestTaskColumns());
}
