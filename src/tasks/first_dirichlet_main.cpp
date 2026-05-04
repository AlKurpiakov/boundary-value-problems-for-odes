#include "tasks/first_dirichlet_main.hpp"

#include "task_utils.hpp"

TaskResult runFirstDirichletMainTask(const InputData& /*input*/, const VariantData& /*variant*/) {
    return makeTaskStub(
        "first-dirichlet-main",
        "Первая краевая основная задача",
        "2. Основная",
        "u(0)=mu1, u(1)=mu2",
        "Метод баланса, сравнение сеток n и 2n",
        "Исполнитель 2",
        makeMainTaskColumns());
}
