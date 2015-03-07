#pragma once

#include "event_loop.h"

class WidgetTime : public Widget {
    int timerfd;
    void update_string() noexcept;

    char buffer[64];
public:
    WidgetTime(EventLoop &event_loop);
    virtual const char* get_string(void) const noexcept override;
    virtual void descriptor_ready() noexcept override;
};
