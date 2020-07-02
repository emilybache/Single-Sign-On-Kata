import unittest

from my_service import *


class MyServiceTest(unittest.TestCase):

    def test_invalidSSOTokenIsRejected(self):
        service = MyService(None)
        response = service.handle_request(Request("Foo", None))
        self.assertNotEqual("Hello Foo!", response.text)
        
        
if __name__ == "__main__":
    unittest.main()
