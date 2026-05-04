#include "tasks/first_dirichlet_test.hpp"

#include "task_utils.hpp"

TaskResult runFirstDirichletTestTask(const InputData& /*input*/, const VariantData& /*variant*/) {
    return makeTaskStub(
        "first-dirichlet-test",
        "Первая краевая тестовая задача",
        "1. Тестовая",
        "u(0)=mu1, u(1)=mu2",
        "Метод баланса, тестовая задача с аналитическим решением",
        "Исполнитель 1",
        makeTestTaskColumns());
}
