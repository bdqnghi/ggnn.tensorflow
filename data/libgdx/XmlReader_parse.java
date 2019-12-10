public Element parse(char[] data, int offset, int length) {
    int cs, p = offset, pe = length;
    int s = 0;
    String attributeName = null;
    boolean hasBody = false;
    // line 93 "XmlReader.java"
    {
        cs = xml_start;
    }
    // line 97 "XmlReader.java"
    {
        int _klen;
        int _trans = 0;
        int _acts;
        int _nacts;
        int _keys;
        int _goto_targ = 0;
        _goto: while (true) {
            switch(_goto_targ) {
                case 0:
                    if (p == pe) {
                        _goto_targ = 4;
                        continue _goto;
                    }
                    if (cs == 0) {
                        _goto_targ = 5;
                        continue _goto;
                    }
                case 1:
                    _match: do {
                        _keys = _xml_key_offsets[cs];
                        _trans = _xml_index_offsets[cs];
                        _klen = _xml_single_lengths[cs];
                        if (_klen > 0) {
                            int _lower = _keys;
                            int _mid;
                            int _upper = _keys + _klen - 1;
                            while (true) {
                                if (_upper < _lower)
                                    break;
                                _mid = _lower + ((_upper - _lower) >> 1);
                                if (data[p] < _xml_trans_keys[_mid])
                                    _upper = _mid - 1;
                                else if (data[p] > _xml_trans_keys[_mid])
                                    _lower = _mid + 1;
                                else {
                                    _trans += (_mid - _keys);
                                    break _match;
                                }
                            }
                            _keys += _klen;
                            _trans += _klen;
                        }
                        _klen = _xml_range_lengths[cs];
                        if (_klen > 0) {
                            int _lower = _keys;
                            int _mid;
                            int _upper = _keys + (_klen << 1) - 2;
                            while (true) {
                                if (_upper < _lower)
                                    break;
                                _mid = _lower + (((_upper - _lower) >> 1) & ~1);
                                if (data[p] < _xml_trans_keys[_mid])
                                    _upper = _mid - 2;
                                else if (data[p] > _xml_trans_keys[_mid + 1])
                                    _lower = _mid + 2;
                                else {
                                    _trans += ((_mid - _keys) >> 1);
                                    break _match;
                                }
                            }
                            _trans += _klen;
                        }
                    } while (false);
                    _trans = _xml_indicies[_trans];
                    cs = _xml_trans_targs[_trans];
                    if (_xml_trans_actions[_trans] != 0) {
                        _acts = _xml_trans_actions[_trans];
                        _nacts = (int) _xml_actions[_acts++];
                        while (_nacts-- > 0) {
                            switch(_xml_actions[_acts++]) {
                                case 0:
                                    // line 94 "XmlReader.rl"
                                    {
                                        s = p;
                                    }
                                    break;
                                case 1:
                                    // line 95 "XmlReader.rl"
                                    {
                                        char c = data[s];
                                        if (c == '?' || c == '!') {
                                            if (// 
                                            data[s + 1] == '[' && // 
                                            data[s + 2] == 'C' && // 
                                            data[s + 3] == 'D' && // 
                                            data[s + 4] == 'A' && // 
                                            data[s + 5] == 'T' && // 
                                            data[s + 6] == 'A' && data[s + 7] == '[') {
                                                s += 8;
                                                p = s + 2;
                                                while (data[p - 2] != ']' || data[p - 1] != ']' || data[p] != '>') p++;
                                                text(new String(data, s, p - s - 2));
                                            } else if (c == '!' && data[s + 1] == '-' && data[s + 2] == '-') {
                                                p = s + 3;
                                                while (data[p] != '-' || data[p + 1] != '-' || data[p + 2] != '>') p++;
                                                p += 2;
                                            } else
                                                while (data[p] != '>') p++;
                                            {
                                                cs = 15;
                                                _goto_targ = 2;
                                                if (true)
                                                    continue _goto;
                                            }
                                        }
                                        hasBody = true;
                                        open(new String(data, s, p - s));
                                    }
                                    break;
                                case 2:
                                    // line 125 "XmlReader.rl"
                                    {
                                        hasBody = false;
                                        close();
                                        {
                                            cs = 15;
                                            _goto_targ = 2;
                                            if (true)
                                                continue _goto;
                                        }
                                    }
                                    break;
                                case 3:
                                    // line 130 "XmlReader.rl"
                                    {
                                        close();
                                        {
                                            cs = 15;
                                            _goto_targ = 2;
                                            if (true)
                                                continue _goto;
                                        }
                                    }
                                    break;
                                case 4:
                                    // line 134 "XmlReader.rl"
                                    {
                                        if (hasBody) {
                                            cs = 15;
                                            _goto_targ = 2;
                                            if (true)
                                                continue _goto;
                                        }
                                    }
                                    break;
                                case 5:
                                    // line 137 "XmlReader.rl"
                                    {
                                        attributeName = new String(data, s, p - s);
                                    }
                                    break;
                                case 6:
                                    // line 140 "XmlReader.rl"
                                    {
                                        attribute(attributeName, new String(data, s, p - s));
                                    }
                                    break;
                                case 7:
                                    // line 143 "XmlReader.rl"
                                    {
                                        int end = p;
                                        while (end != s) {
                                            switch(data[end - 1]) {
                                                case ' ':
                                                case '\t':
                                                case '\n':
                                                case '\r':
                                                    end--;
                                                    continue;
                                            }
                                            break;
                                        }
                                        int current = s;
                                        boolean entityFound = false;
                                        while (current != end) {
                                            if (data[current++] != '&')
                                                continue;
                                            int entityStart = current;
                                            while (current != end) {
                                                if (data[current++] != ';')
                                                    continue;
                                                textBuffer.append(data, s, entityStart - s - 1);
                                                String name = new String(data, entityStart, current - entityStart - 1);
                                                String value = entity(name);
                                                textBuffer.append(value != null ? value : name);
                                                s = current;
                                                entityFound = true;
                                                break;
                                            }
                                        }
                                        if (entityFound) {
                                            if (s < end)
                                                textBuffer.append(data, s, end - s);
                                            text(textBuffer.toString());
                                            textBuffer.setLength(0);
                                        } else
                                            text(new String(data, s, end - s));
                                    }
                                    break;
                            }
                        }
                    }
                case 2:
                    if (cs == 0) {
                        _goto_targ = 5;
                        continue _goto;
                    }
                    if (++p != pe) {
                        _goto_targ = 1;
                        continue _goto;
                    }
                case 4:
                case 5:
            }
            break;
        }
    }
    if (p < pe) {
        int lineNumber = 1;
        for (int i = 0; i < p; i++) if (data[i] == '\n')
            lineNumber++;
        throw new SerializationException("Error parsing XML on line " + lineNumber + " near: " + new String(data, p, Math.min(32, pe - p)));
    } else if (elements.size != 0) {
        Element element = elements.peek();
        elements.clear();
        throw new SerializationException("Error parsing XML, unclosed element: " + element.getName());
    }
    Element root = this.root;
    this.root = null;
    return root;
}
