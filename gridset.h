/*
 * Copyright 2015 Patrick Owen patowen95@gmail.com
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 */

#ifndef GRIDSET_H
#define GRIDSET_H

#include <memory>
#include <vector>

#include "grid.h"
#include "point.h"

/**
 * Responsible for holding references to each Grid object and deciding when
 * to let them go and when to let them make calculations.
 */
class GridSet
{
public:
	
private:
	std::vector<std::unique_ptr<Grid>> grids;
};

#endif // GRIDSET_H
