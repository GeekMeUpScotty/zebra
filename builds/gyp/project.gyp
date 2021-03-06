################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
#   GYP file for zebra
#   gyp --depth=.
{
  'target_defaults': {
    'include_dirs': [
      '../../../libzmq/include',
      '../../../czmq/include',
      '../../../libmicrohttpd/include',
      '../../include',
      '.'
    ],
    'defines': [
      'ZEBRA_GYP_BUILD'
    ],
    'conditions': [
      [ 'OS=="win"', {
        'defines': [
          'ZEBRA_HAVE_WINDOWS',
          'ZMQ_STATIC',
          'CZMQ_STATIC',
          'MICROHTTPD_STATIC',
          'ZEBRA_STATIC'
        ],
        'libraries': [
          'ws2_32',
          'advapi32',
          'iphlpapi',
          'Rpcrt4'
        ]
      }],
      [ 'OS=="mac"', {
        'defines': [
          'ZEBRA_HAVE_OSX'
        ]
      }],
      [ 'OS=="linux"', {
        'defines': [
          'ZEBRA_HAVE_LINUX'
        ],
        'xcode_settings': {
          'OTHER_CFLAGS': [
            '-fPIC'
          ],
        },
        'libraries': [
          '-lpthread'
        ]
      }]
    ]
  },
  'targets': [
    {
      'target_name': 'libzebra',
      'type': 'static_library',
      'sources': [
        'platform.h',
        '../../include/zebra.h',
        '../../src/xrap_msg.c',
        '../../include/xrap_msg.h',
        '../../src/xrap_traffic.c',
        '../../include/xrap_traffic.h',
        '../../src/zeb_broker.c',
        '../../include/zeb_broker.h',
        '../../src/zeb_client.c',
        '../../include/zeb_client.h',
        '../../src/zeb_connection.c',
        '../../src/zeb_connection.h',
        '../../src/zeb_curl_client.c',
        '../../src/zeb_curl_client.h',
        '../../src/zeb_handler.c',
        '../../include/zeb_handler.h',
        '../../src/zeb_microhttpd.c',
        '../../include/zeb_microhttpd.h',
        '../../src/zeb_request.c',
        '../../src/zeb_request.h',
        '../../src/zeb_response.c',
        '../../src/zeb_response.h',
        '../../src/zeb_broker_engine.inc',
        '../../src/zeb_client.cfg',
        '../../src/zeb_client_engine.inc',
        '../../include/zebra_library.h',
        '../../src/zebra_selftest.c',
        '../../src/zebra_classes.h'
      ],
      'dependencies': [
        '../../../libzmq/builds/gyp/project.gyp:libzmq',
        '../../../czmq/builds/gyp/project.gyp:libczmq',
      ],
      'copies': [
        {
          'destination': '../../src',
          'files': [
              'platform.h'
          ]
        }
      ]
    },
    {
      'target_name': 'zebra_selftest',
      'type': 'executable',
      'sources': [
        '../../src/zebra_selftest.c'
      ],
      'dependencies': [
        'libzebra'
      ]
    }
  ]
}
