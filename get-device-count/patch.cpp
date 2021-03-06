
node {
    void evaluate(Context ctx) {
        if (!isInputDirty<input_UPD>(ctx))
            return;

        auto sensors = getValue<input_DEV>(ctx);
        emitValue<output_Ndev>(ctx, sensors->getDeviceCount());
        emitValue<output_Ntemp>(ctx, sensors->getDS18Count());
        emitValue<output_DONE>(ctx, 1);
    }
}
