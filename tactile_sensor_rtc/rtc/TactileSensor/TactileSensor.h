#ifndef TactileSensor_H
#define TactileSensor_H

#include <memory>

#include <rtm/Manager.h>
#include <rtm/DataFlowComponentBase.h>
#include <rtm/DataOutPort.h>
#include <rtm/idl/BasicDataType.hh>

class TactileSensor : public RTC::DataFlowComponentBase{
protected:
  RTC::TimedDoubleSeq m_tactileSensorArray_;
  RTC::OutPort<RTC::TimedDoubleSeq> m_tactileSensorArrayOut_;
public:
  TactileSensor(RTC::Manager* manager);
  virtual RTC::ReturnCode_t onInitialize();
  virtual RTC::ReturnCode_t onExecute(RTC::UniqueId ec_id);

private:
};

extern "C"
{
  void TactileSensorInit(RTC::Manager* manager);
}

#endif // TactileSensor_H
