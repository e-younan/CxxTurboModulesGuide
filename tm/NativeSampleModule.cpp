#include <fstream>
#include "NativeSampleModule.h"

namespace facebook::react
{

  NativeSampleModule::NativeSampleModule(std::shared_ptr<CallInvoker> jsInvoker)
      : NativeSampleModuleCxxSpec(std::move(jsInvoker)) {}

  int NativeSampleModule::doFibExpensive(jsi::Runtime &rt, int n)
  {
    if (n < 2)
    {
      return n;
    }
    else
    {
      return doFibExpensive(rt, n - 1) + doFibExpensive(rt, n - 2);
    }
  }
} // namespace facebook::react