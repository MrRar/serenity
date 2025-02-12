/*
 * Copyright (c) 2021, Ali Mohammad Pur <mpfard@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibJS/Runtime/GlobalObject.h>
#include <LibJS/Runtime/Object.h>
#include <LibJS/Runtime/VM.h>
#include <LibWeb/Forward.h>

namespace Web::Bindings {

class WebAssemblyInstancePrototype final : public JS::Object {
    JS_OBJECT(WebAssemblyInstancePrototype, Object);

public:
    explicit WebAssemblyInstancePrototype(JS::Realm& realm)
        : JS::Object(ConstructWithPrototypeTag::Tag, *realm.intrinsics().object_prototype())
    {
    }

    virtual JS::ThrowCompletionOr<void> initialize(JS::Realm&) override;

private:
    JS_DECLARE_NATIVE_FUNCTION(exports_getter);
    static JS::Handle<WebAssemblyInstancePrototype> s_instance;
};

}
