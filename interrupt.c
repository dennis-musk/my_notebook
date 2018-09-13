1. The local_irq_disable() routine is dangerous if interrupts were already disabled prior to its invocation?

Question: Why is it dangerous?

Solution: local_irq_disable() may have similar calling mechanisms as disable_irq() functions discussed in p129: 
calls to these functions nest. If disable_irq() is called twice, the interrupt line is not actually reenabled 
until the second call to enable_irq().

