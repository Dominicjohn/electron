// Copyright (c) 2018 GitHub, Inc.
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file.

#ifndef SHELL_BROWSER_ATOM_NAVIGATION_THROTTLE_H_
#define SHELL_BROWSER_ATOM_NAVIGATION_THROTTLE_H_

#include "content/public/browser/navigation_throttle.h"

namespace electron {

class AtomNavigationThrottle : public content::NavigationThrottle {
 public:
  explicit AtomNavigationThrottle(content::NavigationHandle* handle);
  ~AtomNavigationThrottle() override;

  AtomNavigationThrottle::ThrottleCheckResult WillRedirectRequest() override;

  const char* GetNameForLogging() override;

 private:
  DISALLOW_COPY_AND_ASSIGN(AtomNavigationThrottle);
};

}  // namespace electron

#endif  // SHELL_BROWSER_ATOM_NAVIGATION_THROTTLE_H_
