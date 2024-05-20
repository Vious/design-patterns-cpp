#pragma once

#include <vector>
#include "command.h"

namespace cmdPattern {
class RemoteControl {
public:
    RemoteControl() = default;

    void addCommand(Command *cmd){commands.emplace_back(cmd);}

    void pressButton(int slot) {
        if (slot >= 0 && slot < commands.size()) {
            commands[slot]->execute();
        }
    }

    size_t getSize() {return commands.size(); }

private:
    std::vector<Command *> commands;

};

}