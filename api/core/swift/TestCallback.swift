// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni
import Foundation

final class TestCallback: NSObject, LGTestCallback {
    private var onCallbackBlock: ((String?, LGError?) -> Void)?

    func setOnCallback(_ block: @escaping (String?, LGError?) -> Void) -> TestCallback {
        self.onCallbackBlock = block
        return self
    }

    func onCallback(_ value: String?, error: LGError?) -> Void {
        self.onCallbackBlock?(value, error)
    }
}
