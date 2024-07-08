#if !defined(NOTIFICATION_H)
#define NOTIFICATION_H

class Notification{
public:
virtual void message() = 0;
virtual ~Notification(){}
};
#endif