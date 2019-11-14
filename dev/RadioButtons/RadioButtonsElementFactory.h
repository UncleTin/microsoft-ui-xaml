﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once
#include "common.h"
#include "RadioButtonsElementFactory.g.h"
#include "RadioButtonsElementFactory.properties.h"
#include "ElementFactory.h"

class RadioButtonsElementFactory :
    public ReferenceTracker<RadioButtonsElementFactory, winrt::implementation::RadioButtonsElementFactoryT, ElementFactory>
{
public:
    RadioButtonsElementFactory();
    
    winrt::UIElement GetElementCore(const winrt::ElementFactoryGetArgs& args) override;
    void RecycleElementCore(const winrt::ElementFactoryRecycleArgs& args) override;
private:
};
